/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/Versions/A/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUUID;

@interface NWUUIDMapper : NSObject {

	double _lastAccessDate;
	NSUUID* _externalUUID;
	unsigned long long _usageFlags;

}

@property (assign,nonatomic) double lastAccessDate;                      //@synthesize lastAccessDate=_lastAccessDate - In the implementation block
@property (nonatomic,retain) NSUUID * externalUUID;                      //@synthesize externalUUID=_externalUUID - In the implementation block
@property (assign,nonatomic) unsigned long long usageFlags;              //@synthesize usageFlags=_usageFlags - In the implementation block
-(id)description;
-(unsigned long long)usageFlags;
-(NSUUID *)externalUUID;
-(void)setExternalUUID:(NSUUID *)arg1 ;
-(double)lastAccessDate;
-(void)setLastAccessDate:(double)arg1 ;
-(void)setUsageFlags:(unsigned long long)arg1 ;
@end

