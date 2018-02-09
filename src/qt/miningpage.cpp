<?xml version="1.0" encoding="UTF-8"?>
<ui version="4.0">
 <class>AddressBookPage</class>
 <widget class="QWidget" name="AddressBookPage">
  <property name="geometry">
   <rect>
    <x>0</x>
    <y>0</y>
    <width>760</width>
    <height>380</height>
   </rect>
  </property>
  <property name="windowTitle">
   <string>Address Book</string>
  </property>
  <layout class="QVBoxLayout" name="verticalLayout">
   <item>
    <widget class="QLabel" name="labelExplanation">
     <property name="text">
      <string>These are your MCCoin addresses for receiving payments. You may want to give a different one to each sender so you can keep track of who is paying you.</string>
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
    <widget class="QTableView" name="tableView">
     <property name="contextMenuPolicy">
      <enum>Qt::CustomContextMenu</enum>
     </property>
     <property name="toolTip">
      <string>Double-click to edit address or label</string>
     </property>
     <property name="tabKeyNavigation">
      <bool>false</bool>
     </property>
     <property name="alternatingRowColors">
      <bool>true</bool>
     </property>
     <property name="selectionMode">
      <enum>QAbstractItemView::SingleSelection</enum>
     </property>
     <property name="selectionBehavior">
      <enum>QAbstractItemView::SelectRows</enum>
     </property>
     <property name="sortingEnabled">
      <bool>true</bool>
     </property>
     <attribute name="verticalHeaderVisible">
      <bool>false</bool>
     </attribute>
    </widget>
   </item>
   <item>
    <layout class="QHBoxLayout" name="horizontalLayout">
     <item>
      <widget class="QPushButton" name="newAddressButton">
       <property name="toolTip">
        <string>Create a new address</string>
       </property>
       <property name="text">
        <string>&amp;New Address</string>
       </property>
       <property name="icon">
        <iconset resource="../bitcoin.qrc">
         <normaloff>:/icons/add</normaloff>:/icons/add</iconset>
       </property>
      </widget>
     </item>
     <item>
      <widget class="QPushButton" name="copyToClipboard">
       <property name="toolTip">
        <string>Copy the currently selected address to the system clipboard</string>
       </property>
       <property name="text">
        <string>&amp;Copy Address</string>
       </property>
       <property name="icon">
        <iconset resource="../bitcoin.qrc">
         <normaloff>:/icons/editcopy</normaloff>:/icons/editcopy</iconset>
       </property>
      </widget>
     </item>
     <item>
      <widget class="QPushButton" name="showQRCode">
       <property name="text">
        <string>Show &amp;QR Code</string>
       </property>
       <property name="icon">
        <iconset resource="../bitcoin.qrc">
         <normaloff>:/icons/qrcode</normaloff>:/icons/qrcode</iconset>
       </property>
      </widget>
     </item>
     <item>
      <widget class="QPushButton" name="signMessage">
       <property name="toolTip">
        <string>Sign a message to prove you own a Bitcoin address</string>
       </property>
       <property name="text">
        <string>&amp;Sign Message</string>
       </property>
       <property name="icon">
        <iconset resource="../bitcoin.qrc">
         <normaloff>:/icons/edit</normaloff>:/icons/edit</iconset>
       </property>
      </widget>
     </item>
     <item>
      <widget class="QPushButton" name="verifyMessage">
       <property name="toolTip">
        <string>Verify a message to ensure it was signed with a specified Bitcoin address</string>
       </property>
       <property name="text">
        <string>&amp;Verify Message</string>
       </property>
       <property name="icon">
        <iconset resource="../bitcoin.qrc">
         <normaloff>:/icons/transaction_0</normaloff>:/icons/transaction_0</iconset>
       </property>
      </widget>
     </item>
     <item>
      <widget class="QPushButton" name="deleteButton">
       <property name="toolTip">
        <string>Delete the currently selected address from the list. Only sending addresses can be deleted.</string>
       </property>
       <property name="text">
        <string>&amp;Delete</string>
       </property>
       <property name="icon">
        <iconset resource="../bitcoin.qrc">
         <normaloff>:/icons/remove</normaloff>:/icons/remove</iconset>
       </property>
      </widget>
     </item>
     <item>
      <spacer name="horizontalSpacer">
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
     <item>
      <widget class="QDialogButtonBox" name="buttonBox">
       <property name="sizePolicy">
        <sizepolicy hsizetype="Maximum" vsizetype="Fixed">
         <horstretch>0</horstretch>
         <verstretch>0</verstretch>
        </sizepolicy>
       </property>
       <property name="standardButtons">
        <set>QDialogButtonBox::Ok</set>
       </property>
      </widget>
     </item>
    </layout>
   </item>
  </layout>
 </widget>
 <resources>
  <include location="../bitcoin.qrc"/>
 </resources>
 <connections/>
</ui>
