/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:50 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ScreenReader.framework/Versions/A/Frameworks/ScreenReaderOutput.framework/Versions/A/ScreenReaderOutput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScreenReaderOutput/ScreenReaderOutput-Structs.h>
#import <libobjc.A.dylib/SCROBrailleDisplayInputManagerProtocol.h>

@class NSMutableDictionary, NSSet, NSBundle, NSArray, NSString;

@interface SCROMobileBrailleDisplayInputManager : NSObject <SCROBrailleDisplayInputManagerProtocol> {

	NSMutableDictionary* _displayInfoDict;
	NSSet* _brailleKeys;
	NSBundle* _bundle;
	NSArray* _sixDotCommands;
	NSArray* _eightDotCommands;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
-(id)init;
-(id)_bundle;
-(id)commandForBrailleKey:(id)arg1 ;
-(id)_commandsFromBrailleInputMode:(int)arg1 ;
-(id)_commandForHidUsage:(id)arg1 ;
-(id)_sixDotCommands;
-(id)_eightDotCommands;
-(id)inputIdentifierAtIndex:(unsigned long long)arg1 forDisplayWithToken:(int)arg2 ;
-(void)configureWithDriverConfiguration:(id)arg1 ;
-(id)driverIdentifierForDisplayWithToken:(int)arg1 ;
-(id)modelIdentifierForDisplayWithToken:(int)arg1 ;
-(unsigned long long)countForDisplayWithToken:(int)arg1 ;
-(id)commandAtIndex:(unsigned long long)arg1 forDisplayWithToken:(int)arg2 ;
-(id)userDefaultsForModelIdentifier:(id)arg1 ;
-(void)setCommand:(id)arg1 forInputIdentifier:(id)arg2 forDisplayWithToken:(int)arg3 ;
-(void)setUserDefaults:(id)arg1 forModelIdentifier:(id)arg2 ;
-(id)buttonNamesForInputIdentifier:(id)arg1 forDisplayWithToken:(int)arg2 ;
-(CFStringRef)defaultsKeyForModelIdentifier:(id)arg1 ;
-(id)commandDictionaryForDisplayWithToken:(int)arg1 ;
-(void)setCommand:(id)arg1 forBrailleKey:(id)arg2 ;
-(void)removeAllUserAssignedCommandsForDisplayWithToken:(int)arg1 ;
-(unsigned long long)userAssignedCommandCountForDisplayWithToken:(int)arg1 ;
-(id)buttonNamesAtIndex:(unsigned long long)arg1 forDisplayWithToken:(int)arg2 ;
@end

