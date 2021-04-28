/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:50 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ScreenReader.framework/Versions/A/Frameworks/ScreenReaderOutput.framework/Versions/A/ScreenReaderOutput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableDictionary, NSMutableArray, NSBundle, SCRCUserDefaults;

@interface SCROBrailleDisplayInputManagerCacheObject : NSObject {

	NSString* _driverIdentifier;
	NSString* _modelIdentifier;
	int _brailleInputMode;
	NSMutableDictionary* _commandDictionary;
	NSMutableArray* _orderedIdentifiers;
	NSBundle* _bundle;
	SCRCUserDefaults* _userDefaults;

}
-(id)bundle;
-(id)modelIdentifier;
-(id)userDefaults;
-(id)driverIdentifier;
-(id)commandDictionary;
-(int)brailleInputMode;
-(id)initWithDriverIdentifier:(id)arg1 modelIdentifier:(id)arg2 brailleInputMode:(int)arg3 commandDictionary:(id)arg4 orderedIdentifiers:(id)arg5 bundle:(id)arg6 userDefaults:(id)arg7 ;
-(id)orderedIdentifiers;
@end
