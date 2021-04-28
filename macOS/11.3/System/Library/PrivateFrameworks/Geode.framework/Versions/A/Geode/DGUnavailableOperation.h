/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Geode.framework/Versions/A/Geode
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Geode/DGOperation.h>

@class NSDictionary;

@interface DGUnavailableOperation : DGOperation {

	NSDictionary* _settingsDictionary;
	NSDictionary* _attributes;

}
+(id)attributes;
+(id)_stringsTableName;
+(id)inputKeys;
+(id)outputKeys;
-(void)dealloc;
-(id)init;
-(void)setEnabled:(char)arg1 ;
-(id)identifier;
-(char)isEnabled;
-(id)attributes;
-(id)initWithOperation:(id)arg1 ;
-(char)isAvailable;
-(void)setInteractive:(char)arg1 ;
-(char)isInteractive;
-(id)settingsDictionary;
-(char)excludeFromAdjustmentsMenu;
-(char)applySettingsDictionary:(id)arg1 ;
@end
