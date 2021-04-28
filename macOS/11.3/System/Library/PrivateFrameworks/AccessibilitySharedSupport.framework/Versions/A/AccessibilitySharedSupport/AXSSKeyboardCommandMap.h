/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:51 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AccessibilitySharedSupport.framework/Versions/A/AccessibilitySharedSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilitySharedSupport/AccessibilitySharedSupport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSSet, NSDictionary, NSMutableDictionary;

@interface AXSSKeyboardCommandMap : NSObject <NSCopying, NSSecureCoding> {

	NSSet* _availableCommands;
	NSDictionary* _keyChordsToCommands;
	NSDictionary* _commandsToArraysOfKeyChords;
	NSDictionary* _userDefinedCommandsToKeyChords;
	NSMutableDictionary* _transientCommands;

}

@property (nonatomic,readonly) NSDictionary * keyChordsToCommands;                         //@synthesize keyChordsToCommands=_keyChordsToCommands - In the implementation block
@property (nonatomic,readonly) NSDictionary * commandsToArraysOfKeyChords;                 //@synthesize commandsToArraysOfKeyChords=_commandsToArraysOfKeyChords - In the implementation block
@property (nonatomic,readonly) NSDictionary * userDefinedCommandsToKeyChords;              //@synthesize userDefinedCommandsToKeyChords=_userDefinedCommandsToKeyChords - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * transientCommands;                    //@synthesize transientCommands=_transientCommands - In the implementation block
@property (nonatomic,retain) NSSet * availableCommands;                                    //@synthesize availableCommands=_availableCommands - In the implementation block
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_initWithCommandsToKeyChordsDictionary:(id)arg1 ;
-(char)_validateCommandsToKeyChords:(id)arg1 ;
-(NSDictionary *)userDefinedCommandsToKeyChords;
-(NSSet *)availableCommands;
-(NSMutableDictionary *)transientCommands;
-(char)isEqualToCommandMap:(id)arg1 ;
-(char)_isAvailableCommand:(id)arg1 ;
-(void)_initializeDictionariesIfNeeded;
-(NSDictionary *)keyChordsToCommands;
-(NSDictionary *)commandsToArraysOfKeyChords;
-(void)setAvailableCommands:(NSSet *)arg1 ;
-(id)commandForKeyChord:(id)arg1 ;
-(id)keyChordForCommand:(id)arg1 ;
-(id)commandMapWithKeyChord:(id)arg1 forCommand:(id)arg2 ;
-(id)addCommandsForTransientKeyChords:(id)arg1 ;
-(void)removeTransientKeyChordsForIdentifier:(id)arg1 ;
@end

