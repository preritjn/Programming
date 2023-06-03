import unittest
from employee import Employee
from unittest.mock import patch


class TestEmployee(unittest.TestCase):

    @classmethod
    def setUpClass(cls):
        print('setup class')

    @classmethod
    def tearDownClass(cls):
        print('tear down class')

    def setUp(self):
        print('setup')
        self.emp_1 = Employee('Prerit', 'Jain', 1600000)
        self.emp_2 = Employee('Prerit', 'Agrawal', 160000)

    def tearDown(self):
        print('tear down')

    def test_email(self):
        print('email')
        self.assertEqual(self.emp_1.email, 'Prerit.Jain@gmail.com')
        self.assertEqual(self.emp_2.email, 'Prerit.Agrawal@gmail.com')

        self.emp_1.first = 'John'
        self.emp_2.first = 'Jane'

        self.assertEqual(self.emp_1.email, 'John.Jain@gmail.com')
        self.assertEqual(self.emp_2.email, 'Jane.Agrawal@gmail.com')

    def test_fullname(self):
        print('fullname')
        self.assertEqual(self.emp_1.fullname, 'Prerit Jain')
        self.assertEqual(self.emp_2.fullname, 'Prerit Agrawal')

        self.emp_1.first = 'John'
        self.emp_2.first = 'Jane'

        self.assertEqual(self.emp_1.fullname, 'John Jain')
        self.assertEqual(self.emp_2.fullname, 'Jane Agrawal')

    def test_apply_raise(self):
        print('apply raise')
        self.emp_1.apply_raise()
        self.emp_2.apply_raise()

        self.assertEqual(self.emp_1.pay, 52500)
        self.assertEqual(self.emp_2.pay, 63000)

    def test_monthly_schedule(self):
        with patch('employee.requests.get') as mocked_get:
            mocked_get.return_value.ok = True
            mocked_get.return_value.text = 'Success'

            schedule = self.emp_1.monthly_schedule('May')
            mocked_get.assert_called_with('http://company.com/Jain/May')
            self.assertEqual(schedule, 'Success')

            mocked_get.return_value.ok = False
            schedule = self.emp_2.monthly_schedule('June')
            mocked_get.assert_called_with('http://company.com/Agrawal/June')
            self.assertEqual(schedule, 'Bad Response!')


if __name__ == '__main__':
    unittest.main()
