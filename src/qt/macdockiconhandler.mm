<?xml version="1.0" encoding="UTF-8"?>
<ui version="4.0">
 <class>AskPassphraseDialog</class>
 <widget class="QDialog" name="AskPassphraseDialog">
  <property name="geometry">
   <rect>
    <x>0</x>
    <y>0</y>
    <width>598</width>
    <height>198</height>
   </rect>
  </property>
  <property name="sizePolicy">
   <sizepolicy hsizetype="Preferred" vsizetype="Minimum">
    <horstretch>0</horstretch>
    <verstretch>0</verstretch>
   </sizepolicy>
  </property>
  <property name="minimumSize">
   <size>
    <width>550</width>
    <height>0</height>
   </size>
  </property>
  <property name="windowTitle">
   <string>Passphrase Dialog</string>
  </property>
  <layout class="QVBoxLayout" name="verticalLayout">
   <item>
    <widget class="QLabel" name="warningLabel">
     <property name="textFormat">
      <enum>Qt::RichText</enum>
     </property>
     <property name="wordWrap">
      <bool>true</bool>
     </property>
    </widget>
   </item>
   <item>
    <layout class="QFormLayout" name="formLayout">
     <property name="fieldGrowthPolicy">
      <enum>QFormLayout::AllNonFixedFieldsGrow</enum>
     </property>
     <item row="0" column="0">
      <widget class="QLabel" name="passLabel1">
       <property name="text">
        <string>Enter passphrase</string>
       </property>
      </widget>
     </item>
     <item row="0" column="1">
      <widget class="QLineEdit" name="passEdit1">
       <property name="echoMode">
        <enum>QLineEdit::Password</enum>
       </property>
      </widget>
     </item>
     <item row="1" column="0">
      <widget class="QLabel" name="passLabel2">
       <property name="text">
        <string>New passphrase</string>
       </property>
      </widget>
     </item>
     <item row="1" column="1">
      <widget class="QLineEdit" name="passEdit2">
       <property name="echoMode">
        <enum>QLineEdit::Password</enum>
       </property>
      </widget>
     </item>
     <item row="2" column="0">
      <widget class="QLabel" name="passLabel3">
       <property name="text">
        <string>Repeat new passphrase</string>
       </property>
      </widget>
     </item>
     <item row="2" column="1">
      <widget class="QLineEdit" name="passEdit3">
       <property name="echoMode">
        <enum>QLineEdit::Password</enum>
       </property>
      </widget>
     </item>
     <item row="3" column="1">
      <widget class="QLabel" name="capsLabel">
       <property name="font">
        <font>
         <weight>75</weight>
         <bold>true</bold>
        </font>
       </property>
       <property name="text">
        <string/>
       </property>
       <property name="alignment">
        <set>Qt::AlignCenter</set>
       </property>
      </widget>
     </item>
    </layout>
   </item>
   <item>
    <widget class="QDialogButtonBox" name="buttonBox">
     <property name="orientation">
      <enum>Qt::Horizontal</enum>
     </property>
     <property name="standardButtons">
      <set>QDialogButtonBox::Cancel|QDialogButtonBox::Ok</set>
     </property>
    </widget>
   </item>
  </layout>
 </widget>
 <resources/>
 <connections>
  <connection>
   <sender>buttonBox</sender>
   <signal>accepted()</signal>
   <receiver>AskPassphraseDialog</receiver>
   <slot>accept()</slot>
   <hints>
    <hint type="sourcelabel">
     <x>248</x>
     <y>254</y>
    </hint>
    <hint type="destinationlabel">
     <x>157</x>
     <y>274</y>
    </hint>
   </hints>
  </connection>
  <connection>
   <sender>buttonBox</sender>
   <signal>rejected()</signal>
   <receiver>AskPassphraseDialog</receiver>
   <slot>reject()</slot>
   <hints>
    <hint type="sourcelabel">
     <x>316</x>
     <y>260</y>
    </hint>
    <hint type="destinationlabel">
     <x>286</x>
     <y>274</y>
    </hint>
   </hints>
  </connection>
 </connections>
</ui>
