<?xml version="1.0" encoding="UTF-8"?>
<ui version="4.0">
 <class>OptionsDialog</class>
 <widget class="QDialog" name="OptionsDialog">
  <property name="geometry">
   <rect>
    <x>0</x>
    <y>0</y>
    <width>540</width>
    <height>380</height>
   </rect>
  </property>
  <property name="windowTitle">
   <string>Options</string>
  </property>
  <property name="modal">
   <bool>true</bool>
  </property>
  <layout class="QVBoxLayout" name="verticalLayout">
   <item>
    <widget class="QTabWidget" name="tabWidget">
     <property name="tabPosition">
      <enum>QTabWidget::North</enum>
     </property>
     <property name="currentIndex">
      <number>1</number>
     </property>
     <widget class="QWidget" name="tabMain">
      <attribute name="title">
       <string>&amp;Main</string>
      </attribute>
      <layout class="QVBoxLayout" name="verticalLayout_Main">
       <item>
        <widget class="QLabel" name="transactionFeeInfoLabel">
         <property name="text">
          <string>Optional transaction fee per kB that helps make sure your transactions are processed quickly. Most transactions are 1 kB. Fee 0.01 recommended.</string>
         </property>
         <property name="textFormat">
          <enum>Qt::PlainText</enum>
         </property>
         <property name="wordWrap">
          <bool>true</bool>
         </property>
        </widget>
       </item>
       <item>
        <layout class="QHBoxLayout" name="horizontalLayout_Main">
         <item>
          <widget class="QLabel" name="transactionFeeLabel">
           <property name="text">
            <string>Pay transaction &amp;fee</string>
           </property>
           <property name="textFormat">
            <enum>Qt::PlainText</enum>
           </property>
           <property name="buddy">
            <cstring>transactionFee</cstring>
           </property>
          </widget>
         </item>
         <item>
          <widget class="BitcoinAmountField" name="transactionFee"/>
         </item>
         <item>
          <spacer name="horizontalSpacer_Main">
           <property name="orientation">
            <enum>Qt::Horizontal</enum>
           </property>
           <property name="sizeHint" stdset="0">
            <size>
             <width>40</width>
             <height>20</height>
            </size>
           </property>
          </spacer>
         </item>
        </layout>
       </item>
       <item>
        <widget class="QCheckBox" name="bitcoinAtStartup">
         <property name="toolTip">
          <string>Automatically start MCCoin after logging in to the system.</string>
         </property>
         <property name="text">
          <string>&amp;Start MCCoin on system login</string>
         </property>
        </widget>
       </item>
       <item>
        <widget class="QCheckBox" name="detachDatabases">
         <property name="toolTip">
          <string>Detach block and address databases at shutdown. This means they can be moved to another data directory, but it slows down shutdown. The wallet is always detached.</string>
         </property>
         <property name="text">
          <string>&amp;Detach databases at shutdown</string>
         </property>
        </widget>
       </item>
       <item>
        <spacer name="verticalSpacer_Main">
         <property name="orientation">
          <enum>Qt::Vertical</enum>
         </property>
         <property name="sizeHint" stdset="0">
          <size>
           <width>20</width>
           <height>40</height>
          </size>
         </property>
        </spacer>
       </item>
      </layout>
     </widget>
     <widget class="QWidget" name="tabNetwork">
      <attribute name="title">
       <string>&amp;Network</string>
      </attribute>
      <layout class="QVBoxLayout" name="verticalLayout_Network">
       <item>
        <widget class="QCheckBox" name="mapPortUpnp">
         <property name="toolTip">
          <string>Automatically open the MCCoin client port on the router. This only works when your router supports UPnP and it is enabled.</string>
         </property>
         <property name="text">
          <string>Map port using &amp;UPnP</string>
         </property>
        </widget>
       </item>
       <item>
        <widget class="QCheckBox" name="connectSocks">
         <property name="toolTip">
          <string>Connect to the MCCoin network through a SOCKS proxy (e.g. when connecting through Tor).</string>
         </property>
         <property name="text">
          <string>&amp;Connect through SOCKS proxy:</string>
         </property>
        </widget>
       </item>
       <item>
        <layout class="QHBoxLayout" name="horizontalLayout_Network">
         <item>
          <widget class="QLabel" name="proxyIpLabel">
           <property name="text">
            <string>Proxy &amp;IP:</string>
           </property>
           <property name="textFormat">
            <enum>Qt::PlainText</enum>
           </property>
           <property name="buddy">
            <cstring>proxyIp</cstring>
           </property>
          </widget>
         </item>
         <item>
          <widget class="QValidatedLineEdit" name="proxyIp">
           <property name="maximumSize">
            <size>
             <width>140</width>
             <height>16777215</height>
            </size>
           </property>
           <property name="toolTip">
            <string>IP address of the proxy (e.g. 127.0.0.1)</string>
           </property>
          </widget>
         </item>
         <item>
          <widget class="QLabel" name="proxyPortLabel">
           <property name="text">
            <string>&amp;Port:</string>
           </property>
           <property name="textFormat">
            <enum>Qt::PlainText</enum>
           </property>
           <property name="buddy">
            <cstring>proxyPort</cstring>
           </property>
          </widget>
         </item>
         <item>
          <widget class="QLineEdit" name="proxyPort">
           <property name="maximumSize">
            <size>
             <width>55</width>
             <height>16777215</height>
            </size>
           </property>
           <property name="toolTip">
            <string>Port of the proxy (e.g. 9050)</string>
           </property>
          </widget>
         </item>
         <item>
          <widget class="QLabel" name="socksVersionLabel">
           <property name="text">
            <string>SOCKS &amp;Version:</string>
           </property>
           <property name="textFormat">
            <enum>Qt::PlainText</enum>
           </property>
           <property name="buddy">
            <cstring>socksVersion</cstring>
           </property>
          </widget>
         </item>
         <item>
          <widget class="QValueComboBox" name="socksVersion">
           <property name="toolTip">
            <string>SOCKS version of the proxy (e.g. 5)</string>
           </property>
          </widget>
         </item>
         <item>
          <spacer name="horizontalSpacer_Network">
           <property name="orientation">
            <enum>Qt::Horizontal</enum>
           </property>
           <property name="sizeHint" stdset="0">
            <size>
             <width>40</width>
             <height>20</height>
            </size>
           </property>
          </spacer>
         </item>
        </layout>
       </item>
       <item>
        <spacer name="verticalSpacer_Network">
         <property name="orientation">
          <enum>Qt::Vertical</enum>
         </property>
         <property name="sizeHint" stdset="0">
          <size>
           <width>20</width>
           <height>40</height>
          </size>
         </property>
        </spacer>
       </item>
      </layout>
     </widget>
     <widget class="QWidget" name="tabWindow">
      <attribute name="title">
       <string>&amp;Window</string>
      </attribute>
      <layout class="QVBoxLayout" name="verticalLayout_Window">
       <item>
        <widget class="QCheckBox" name="minimizeToTray">
         <property name="toolTip">
          <string>Show only a tray icon after minimizing the window.</string>
         </property>
         <property name="text">
          <string>&amp;Minimize to the tray instead of the taskbar</string>
         </property>
        </widget>
       </item>
       <item>
        <widget class="QCheckBox" name="minimizeOnClose">
         <property name="toolTip">
          <string>Minimize instead of exit the application when the window is closed. When this option is enabled, the application will be closed only after selecting Quit in the menu.</string>
         </property>
         <property name="text">
          <string>M&amp;inimize on close</string>
         </property>
        </widget>
       </item>
       <item>
        <spacer name="verticalSpacer_Window">
         <property name="orientation">
          <enum>Qt::Vertical</enum>
         </property>
         <property name="sizeHint" stdset="0">
          <size>
           <width>20</width>
           <height>40</height>
          </size>
         </property>
        </spacer>
       </item>
      </layout>
     </widget>
     <widget class="QWidget" name="tabDisplay">
      <attribute name="title">
       <string>&amp;Display</string>
      </attribute>
      <layout class="QVBoxLayout" name="verticalLayout_Display">
       <item>
        <layout class="QHBoxLayout" name="horizontalLayout_1_Display">
         <item>
          <widget class="QLabel" name="langLabel">
           <property name="text">
            <string>User Interface &amp;language:</string>
           </property>
           <property name="textFormat">
            <enum>Qt::PlainText</enum>
           </property>
           <property name="buddy">
            <cstring>lang</cstring>
           </property>
          </widget>
         </item>
         <item>
          <widget class="QValueComboBox" name="lang">
           <property name="toolTip">
            <string>The user interface language can be set here. This setting will take effect after restarting MCCoin.</string>
           </property>
          </widget>
         </item>
        </layout>
       </item>
       <item>
        <layout class="QHBoxLayout" name="horizontalLayout_2_Display">
         <item>
          <widget class="QLabel" name="unitLabel">
           <property name="text">
            <string>&amp;Unit to show amounts in:</string>
           </property>
           <property name="textFormat">
            <enum>Qt::PlainText</enum>
           </property>
           <property name="buddy">
            <cstring>unit</cstring>
           </property>
          </widget>
         </item>
         <item>
          <widget class="QValueComboBox" name="unit">
           <property name="toolTip">
            <string>Choose the default subdivision unit to show in the interface and when sending coins.</string>
           </property>
          </widget>
         </item>
        </layout>
       </item>
       <item>
        <widget class="QCheckBox" name="displayAddresses">
         <property name="toolTip">
          <string>Whether to show MCCoin addresses in the transaction list or not.</string>
         </property>
         <property name="text">
          <string>&amp;Display addresses in transaction list</string>
         </property>
        </widget>
       </item>
       <item>
        <spacer name="verticalSpacer_Display">
         <property name="orientation">
          <enum>Qt::Vertical</enum>
         </property>
         <property name="sizeHint" stdset="0">
          <size>
           <width>20</width>
           <height>40</height>
          </size>
         </property>
        </spacer>
       </item>
      </layout>
     </widget>
    </widget>
   </item>
   <item>
    <layout class="QHBoxLayout" name="horizontalLayout_Buttons">
     <item>
      <spacer name="horizontalSpacer_1">
       <property name="orientation">
        <enum>Qt::Horizontal</enum>
       </property>
       <property name="sizeHint" stdset="0">
        <size>
         <width>40</width>
         <height>48</height>
        </size>
       </property>
      </spacer>
     </item>
     <item>
      <widget class="QLabel" name="statusLabel">
       <property name="font">
        <font>
         <weight>75</weight>
         <bold>true</bold>
        </font>
       </property>
       <property name="text">
        <string/>
       </property>
       <property name="textFormat">
        <enum>Qt::PlainText</enum>
       </property>
       <property name="wordWrap">
        <bool>true</bool>
       </property>
      </widget>
     </item>
     <item>
      <spacer name="horizontalSpacer_2">
       <property name="orientation">
        <enum>Qt::Horizontal</enum>
       </property>
       <property name="sizeHint" stdset="0">
        <size>
         <width>40</width>
         <height>48</height>
        </size>
       </property>
      </spacer>
     </item>
     <item>
      <widget class="QPushButton" name="okButton">
       <property name="text">
        <string>&amp;OK</string>
       </property>
      </widget>
     </item>
     <item>
      <widget class="QPushButton" name="cancelButton">
       <property name="text">
        <string>&amp;Cancel</string>
       </property>
       <property name="autoDefault">
        <bool>false</bool>
       </property>
      </widget>
     </item>
     <item>
      <widget class="QPushButton" name="applyButton">
       <property name="text">
        <string>&amp;Apply</string>
       </property>
       <property name="autoDefault">
        <bool>false</bool>
       </property>
       <property name="default">
        <bool>false</bool>
       </property>
       <property name="flat">
        <bool>false</bool>
       </property>
      </widget>
     </item>
    </layout>
   </item>
  </layout>
 </widget>
 <customwidgets>
  <customwidget>
   <class>BitcoinAmountField</class>
   <extends>QSpinBox</extends>
   <header>bitcoinamountfield.h</header>
  </customwidget>
  <customwidget>
   <class>QValueComboBox</class>
   <extends>QComboBox</extends>
   <header>qvaluecombobox.h</header>
  </customwidget>
  <customwidget>
   <class>QValidatedLineEdit</class>
   <extends>QLineEdit</extends>
   <header>qvalidatedlineedit.h</header>
  </customwidget>
 </customwidgets>
 <resources/>
 <connections/>
</ui>
