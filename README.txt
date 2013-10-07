REQUIREMENTS
============
Requires token module: https://drupal.org/project/token


DESCRIPTION
===========
This is a lightweight module for sending log entries by email. Example use case
would be to set your monitoring email address and configure it to send only
alert and emergency error levels.


CONFIGURAITON
=============
You need to configure the module after enabling it. It doesn't react yet if you
just enable it.

1) Enable the module
2) Go to the configraution page (from module list or
   admin/config/development/logging)
3) Check "Send log entries by email" setting
4) Set the minimum severity (example critical)
5) Type the recipient for the notification emails
6) Press "Save configuration"

Now log entires with critical, alert or emergency error severity, will be sent
to your defined recipient email address.

SIMILAR MODULES
===============
- https://drupal.org/project/logging_alerts
- https://drupal.org/project/watchdog_digest
