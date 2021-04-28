/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:26 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/Versions/A/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface CLSAggregate : NSObject {

	char _allowWeeklyUpdates;
	NSString* _primaryDomain;

}

@property (nonatomic,readonly) char allowWeeklyUpdates;              //@synthesize allowWeeklyUpdates=_allowWeeklyUpdates - In the implementation block
@property (nonatomic,retain) NSString * primaryDomain;               //@synthesize primaryDomain=_primaryDomain - In the implementation block
+(id)sharedCLSAggregate;
-(id)init;
-(void)incrementValueForKey:(id)arg1 ;
-(char)allowWeeklyUpdates;
-(NSString *)primaryDomain;
-(void)invalidateForWeeklyUpdates;
-(id)_allRegisteredKeys;
-(id)_registeredKeysLookupTable;
-(id)_distributionKeys;
-(id)_scalarToAddKeys;
-(id)_needsParsingKeys;
-(id)_stringValueTypeKeys;
-(id)_doubleValueTypeKeys;
-(id)_getSubdomain:(id)arg1 ;
-(id)_aggdMethodConstructionHints;
-(id)_messageTracerMethodConstructionHints;
-(void)recordValue:(id)arg1 forKey:(id)arg2 ;
-(void)_recordAGGDValue:(id)arg1 forKey:(id)arg2 ;
-(void)_recordMessageTracerValue:(id)arg1 forKey:(id)arg2 ;
-(id)_aggdMethodConstructionHintsForKey:(id)arg1 ;
-(id)_messageTracerMethodConstructionHintsForKey:(id)arg1 ;
-(id)_truncateToSignificantFigureForValue:(id)arg1 numOfSignificantDigits:(int)arg2 ;
-(id)_keysForWeeklyReporting;
-(void)setPrimaryDomain:(NSString *)arg1 ;
@end

