## DESCRIPTION
This is a lightweight module for sending log entries by email. Example use case
would be to set your monitoring email address and configure it to send only
alert and emergency error levels.

When maintaining a site where critical log entries needs to be notified to site administrator, it is great to have them by email.

This feature could be done with Rules but currently it would need to support log-entry tokens first to use them in "Send email" action. And not everybody wants to use Rules.

## CONFIGURATION
You need to configure the module after enabling it. It doesn't react yet if you
just enable it.

1) Enable the module
2) Go to the configuration page (from module list or
   admin/config/development/logging)
3) Check "Send log entries by email" setting
4) Set the minimum severity (example critical)
5) Type the recipient for the notification emails
6) Press "Save configuration"

Now log entires with critical, alert or emergency error severity, will be sent
to your defined recipient email address.

## Current Maintainers
 - [@argiepiano](https://github.com/argiepiano)
 - Collaboration and co-maintainers welcome!

## Credits
 - Ported from Drupal 7 to Backdrop CMS by [@argiepiano](https://github.com/argiepiano)
 - Maintainer on drupal.org: [iMiksu](https://www.drupal.org/u/imiksu)

## License

This project is GPL v2 software. See the LICENSE.txt file in this directory for
complete text.
