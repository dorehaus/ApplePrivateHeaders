/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreRC.framework/Versions/A/CoreRC
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreRC/CoreRC-Structs.h>
#import <CoreRC/CoreIRDevice.h>

@class NSMutableSet, NSDictionary;

@interface CoreIRDeviceProvider : CoreIRDevice {

	NSMutableSet* _commandMappings;
	SCD_Struct_Co5* _buttonArray[18];
	unsigned long long _buttonCount;
	unsigned long long _lastCommandTimestamp;
	const SCD_Struct_Co5* _lastButtonPressed;
	unsigned long long _pressAndHoldTimeoutGenerationCount;
	NSDictionary* _matchingDict;

}

@property (nonatomic,copy) NSDictionary * persistentProperties; 
@property (nonatomic,copy) NSDictionary * matchingDict;                      //@synthesize matchingDict=_matchingDict - In the implementation block
@property (nonatomic,readonly) unsigned protocolMask; 
+(void)load;
+(char)supportsSecureCoding;
-(void)dealloc;
-(Class)classForCoder;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)interface;
-(id)initWithDevice:(id)arg1 ;
-(NSDictionary *)persistentProperties;
-(char)sendCommand:(id)arg1 error:(id*)arg2 ;
-(char)setExtendedProperty:(id)arg1 forKey:(id)arg2 error:(id*)arg3 ;
-(id)extendedPropertyForKey:(id)arg1 error:(id*)arg2 ;
-(id)initWithBus:(id)arg1 local:(char)arg2 deviceType:(unsigned long long)arg3 ;
-(id)busProvider;
-(char)dispatchButtonEventWithCommand:(unsigned long long)arg1 pressed:(char)arg2 timestamp:(unsigned long long)arg3 toDevice:(id)arg4 ;
-(char)dispatchEventsForCommand:(id)arg1 toDevice:(id)arg2 ;
-(unsigned)protocolMask;
-(char)setMappingWithSession:(id)arg1 error:(id*)arg2 ;
-(void)setMatchingDict:(NSDictionary *)arg1 ;
-(NSDictionary *)matchingDict;
-(char)setOSDName:(id)arg1 error:(id*)arg2 ;
-(void)setPersistentProperties:(NSDictionary *)arg1 ;
-(void)handleIRCommand:(id)arg1 ;
-(id)startLearningSessionWithReason:(unsigned long long)arg1 error:(id*)arg2 ;
-(char)updateMappingWithSession:(id)arg1 error:(id*)arg2 ;
-(char)clearAllStoredCommands:(id*)arg1 ;
-(char)setCommand:(unsigned long long)arg1 target:(id)arg2 forButtonCombination:(id)arg3 delay:(double)arg4 error:(id*)arg5 ;
-(char)enableButtonCombination:(id)arg1 delay:(double)arg2 error:(id*)arg3 ;
-(char)disableButtonCombination:(id)arg1 delay:(double)arg2 error:(id*)arg3 ;
-(char)sendHIDEvent:(id)arg1 target:(id)arg2 error:(id*)arg3 ;
-(char)sendCommand:(unsigned long long)arg1 target:(id)arg2 withDuration:(unsigned long long)arg3 error:(id*)arg4 ;
-(void)_removeMappingForCommand:(unsigned long long)arg1 ;
-(id)infraredCommandForCommand:(unsigned long long)arg1 ;
-(int)_setInfraredCommandPattern:(id)arg1 repeatPattern:(id)arg2 forCommand:(unsigned long long)arg3 ;
-(SCD_Struct_Co5*)_findButtonWithCommand:(unsigned long long)arg1 ;
-(char)setInfraredCommand:(id)arg1 forCommand:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)learningSessionProvider;
-(char)dispatchEventForCommand:(id)arg1 matchingButton:(const SCD_Struct_Co5*)arg2 timestamp:(unsigned long long)arg3 toDevice:(id)arg4 ;
-(unsigned long long)findDuplicateIRCommand:(id)arg1 forCommand:(unsigned long long)arg2 device:(id*)arg3 ;
-(void)synthesizeButtonReleaseWithTimestamp:(unsigned long long)arg1 ;
-(void)cancelPressAndHoldTimer;
-(void)schedulePressAndHoldTimer;
@end
