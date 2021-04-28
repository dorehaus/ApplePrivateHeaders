/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ExchangeWebServices.framework/Versions/A/ExchangeWebServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/XSDefinitionProvider.h>

@class EWSTimeChangeType, NSString;

@interface EWSTimeZoneType : NSObject <XSDefinitionProvider> {

	char _IsBaseOffsetSpecified;
	double _BaseOffset;
	EWSTimeChangeType* _Standard;
	EWSTimeChangeType* _Daylight;
	NSString* _TimeZoneName;

}

@property (assign,nonatomic) double BaseOffset;                                        //@synthesize BaseOffset=_BaseOffset - In the implementation block
@property (assign,nonatomic) char IsBaseOffsetSpecified;                               //@synthesize IsBaseOffsetSpecified=_IsBaseOffsetSpecified - In the implementation block
@property (setter=tandard,nonatomic,retain) EWSTimeChangeType * Standard;              //@synthesize Standard=_Standard - In the implementation block
@property (nonatomic,retain) EWSTimeChangeType * Daylight;                             //@synthesize Daylight=_Daylight - In the implementation block
@property (nonatomic,copy) NSString * TimeZoneName;                                    //@synthesize TimeZoneName=_TimeZoneName - In the implementation block
@property (nonatomic,copy,readonly) NSString * StandardTimeZoneName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)log;
+(id)definition;
+(id)WindowsTimeZoneNameForStandardTimeZoneName:(id)arg1 ;
+(id)StandardTimeZoneNameForWindowsTimeZoneNameFromICU:(id)arg1 ;
+(id)StandardTimeZoneNameForWindowsTimeZoneNameFromPlist:(id)arg1 ;
+(id)WindowsTimeZoneNameForStandardTimeZoneNameFromICU:(id)arg1 ;
+(id)WindowsTimeZoneNameForStandardTimeZoneNameFromPlist:(id)arg1 ;
+(id)StandardTimeZoneNameForWindowsTimeZoneName:(id)arg1 ;
+(id)StandardTimeZoneNameForEntourageTimeZoneName:(id)arg1 ;
-(NSString *)description;
-(void)setTimeZoneName:(NSString *)arg1 ;
-(id)initWithStandardTimeZoneName:(id)arg1 ;
-(NSString *)TimeZoneName;
-(NSString *)StandardTimeZoneName;
-(EWSTimeChangeType *)Standard;
-(EWSTimeChangeType *)Daylight;
-(double)BaseOffset;
-(void)setBaseOffset:(double)arg1 ;
-(char)IsBaseOffsetSpecified;
-(void)setIsBaseOffsetSpecified:(char)arg1 ;
-(void)setStandard:(EWSTimeChangeType *)arg1 ;
-(void)setDaylight:(EWSTimeChangeType *)arg1 ;
@end

