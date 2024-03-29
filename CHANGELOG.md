# CHANGELOG

## NEXT

- Upgrade CiviCRM to 5.22.1

## 2021.10.19

- Security updates

## 2021.08.27

- Require security_review module
  Resolves #64.
- Newsletter subscription: auto-select ASCM News
  Resolves #70.
- Upgrade Drupal to 7.80
  Resolves #72.

## 2020.01.23

- Upgrade Drupal to 7.69.
- Upgrade CiviCRM to 5.21.1

## 2019.12.11

- Security updates
  - Core 7.68
    Resolves #56
  - file_entity
  - link
  - CiviCRM 5.20
    Resolves #54

## 2019.10.31

- Security updates: file_entity and fontawesome plugins.
- Replace abandoned googleanalytics module with full google_analytics.
  Resolves #53.

## 2019.08.29

- Update contact box.
  Change order of Instagram and Twitter icons.
  Add link to newsletter archive.

## 2019.04.06

- Update Drupal core to 7.65
  Resolves #50
- Update Views
- Require Disable Messages
  Resolves #49

## 2019.02.28

- Update Context module to 3.10

## 2019.02.25

- Update Drupal core to 7.64
- Do not require WYSIWYG module (use CKEditor)

## 2019.02.08

- Upgrade CiviCRM to 5.9.1.
  Resolves #45.
- Upgrade PHP to 7.1 in CPanel.
- Add Webform CiviCRM integration.
  Resolves #46.
- Restore Civi events link in main menu.
  Resolves #47.

## 2019.02.06

- Install and configure antispam module.
  Resolves #42.

## 2019.01.25

- Uninstall unused modules.
  Resolves #38.
- Upgrade Drupal core to 7.63.
  Resolves #43.
- Require honeypot, logintoboggan, and securelogin modules.
  Resolves #41 and #42.

## Release 2017.11.03

- Change Events menu item to CiviEvents calendar.
  Remove blocks and context for custom Events.
  Remove custom Events feature.
  Resolves #34.

## Release 2017.08.30

- Hide secondary (right) sidebar on CiviCRM pages.
  Resolves #25.
- Add Civi role and update Civi permissions.
  Resolves #23.
- Uninstall Mailchimp and Webform Mailchimp modules.
  Resolves #31.

## Release 2017.07.10

- composer.json update:
  "minimum-stability": "alpha",
  "prefer-stable": true
- Drupal 7.56 security update
- Contrib modules and themes

## Release 2016.09.29

- Clean up, fix Composer setup.
  Closes GH-8, GH-13.

## Release 2016.07.05

- Update Features to 7.x-2.10
- Add Bootstrap base theme

## Release 2016.05.13

- Update Features module to 7.x-2.10.

## Release 2016.03.21

- Update Drupal core to 7.43  
  Closes GH-11.

## Release 2016.01.30

Change release numbers (back) to date.

Update addressfield_tokens to 7.x-1.x-dev and applied patch in <https://www.drupal.org/node/2413823#comment-10467875>.

## Release 1.6.6

19 Jan 2016

- Remove Freshdesk popup from page.tpl.php.
- Add links to gitreports form on contact form and footer.

## Release 1.6.5

- Remove custom Mailchimp subscribe form and add form from Mailchimp Signup module

## Security updates 2015-11-10

- Drupal core 7.41
- colorbox-7.x-2.10

## Release 1.6.4

- Update core from 7.38 to 7.39
- Update Ctools from 1.7 to 1.9
- Update Google Analytics Reports from 1.3 to 3.0

## Release 1.6.3

- Update site email address
- Use default frontpage view and remove Blog Feed display

## Release 1.6.2

- Filefield sources and IMCE browser for Info pages

## Security updates

6 Jul 2015

- Views Bulk Operations 7.x-3.3

## Security updates 1.6.1

Pivotal: <https://www.pivotaltracker.com/story/show/97479078>

- Drupal 7.38
- Feeds 7.x-2.0-alpha9

## Release 1.6

- Set up staff access for Handbook content, using Taxonomy Access
- Add format and style buttons to CKEditor to allow headings
- Remove unused Slide show feature

## Release 1.5.2

- Add link to title for event teaser display

## Release 1.5.1

20 May 2015

Security update:

- Mailchimp 7.x-3.3
- Views 7.x-3.11

## Security update

<2015-04-28 Tue>

hotfix/security-20150428

- ds 7.x-2.8

## Release 1.5

<2015-04-14 Tue>

- Install Switchtheme (feature/1.5-switchtheme)
- feature/1.5-blog-view:
  - No publication info in teaser view, only in article view
  - Article, book page and event display: trim to 200 in teaser view
  - Article: Do not display Tags label in teaser view
- feature/1.5-theme-updates:
  - Brief contact info block for footer panel 1
  - Social media block for footer panel 1: Facebook, Twitter, Instagram
  - Remove unused blocks:
    - ASCM Logo
    - Google Calendar
    - Facebook badge
    - Twitter badge

## Release 1.4.8

<2015-02-17 Tue>

- Upgrade Mailchimp module from 2.12 to 3.2
  (Adds list segments)

## Release 1.4.7

<2015-02-17 Tue>

- Patch Mailchimp to segment campaigns programatically:
  <https://www.drupal.org/node/1874392#comment-8717749>

## Release 1.4.6

<2015-02-16 Mon>

- Remove unused Rules feature and module
- Install FB and Twitter modules
- Delete Individual content and node type
- Resize Google Calendar widget to 280x280

## Release 1.4.5

<2015-02-13 Fri>

- Disqus comments

## Release 1.4.4

<2015-02-13 Fri>

- Security release: Views 3.10
- Install Markdown content filter (why did I not have this before?)

## Release 1.4.3

<2014-11-07 Fri>

- Filter Events view by today or later
- Menu for other SCMs and related organisations

## Release 1.4.2

<2014-08-27 Wed>

- Blog feed: use author name instead of author uid
- Add side bar for other people's events

## Release 2014-08-08

- Add tags to book pages
- Core update to 7.31

## Release 1.4.1

<2014-08-04 Mon>

- Add photo thumbnail to blog teaser display
- Install Views RSS and add tags to blog RSS feed

## Release 1.4

<2014-08-04 Mon>

- Upcoming Events
- Webform Mailchimp

## Release 1.3.6

<2014-07-13 Sun>

- Bold links for main menu and node content

## Release 1.3.5

<2014-05-31 Sat>

- Security update: Views
- Security update: Stage file proxy
- Update Freshdesk popup: Feedback not support

## Release 1.3.4

<2014-05-23 Fri>

- Add js for freshdesk popup

## Release 1.3.3

<2014-05-10 Sat>

- Fix conflicted update to 7.28

## Release 1.3.2

<2014-05-10 Sat>

- Security updates: core 7.28, mimemail, revisioning

## Release 1.3.1

<2014-03-10 Mon>

- Add favicon, logo, and screenshot to theme

## Release 1.3.0

<2014-02-23 Sun>

- Add Recent News block to front page
- Add Mailchimp subscription block

## Release 1.2.3

<2014-02-15 Sat>

- Remove CRM feature
- Update file directory and path settings for slideshow

## Release 1.2.2

<2014-01-14 Tue>

- Update slideshow image styles and layout

## Release 1.2.1

<2014-01-13 Mon>

- Refactor code repository
- Host on Bitbucket
- Rebuild on Brie

## Release 1.2 (Sprint 44)

<2013-12-16 Mon>

- Install Views Slideshow
- Logo in left corner

## Sprint 43

<2013-12-09 Mon>

- Remove VBO from public blog display

## Deployed 2013-11-22

- Security updates
  - Drupal 7.24
  - Entityreference
- Add admin display to blog view

## Deployed 2013-11-20

- Security update: Revisioning
- Added view for deceased contacts

## Deployed 2013-11-07

- Contacts admin view
- Contact form - postal address and header boxes
- Mime Mail module

## Sprint 31

<2013-09-16 Mon>

- Information pages
  - Use Revisioning
  - Add Documetation section

- CRM
  - Update Deceased and Date of Death fields
  - Update feed importers
  - Update views

## Sprint 30

<2013-09-09 Mon>

- Blog/news archive
  - Image colorbox
  - Import from Blogger

- Info/resources
  - File attachments
  - Menu links
