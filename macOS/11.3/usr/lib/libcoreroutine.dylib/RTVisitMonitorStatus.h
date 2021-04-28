/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:09 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/libcoreroutine.dylib-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface RTVisitMonitorStatus : NSObject <NSCopying> {

	char _monitoringVisitIncidents;
	char _monitoringLeechedVisitIncidents;
	char _monitoringLowConfidenceVisitIncidents;
	unsigned long long _feedBufferReferenceCounter;

}

@property (assign,nonatomic) char monitoringVisitIncidents;                              //@synthesize monitoringVisitIncidents=_monitoringVisitIncidents - In the implementation block
@property (assign,nonatomic) char monitoringLeechedVisitIncidents;                       //@synthesize monitoringLeechedVisitIncidents=_monitoringLeechedVisitIncidents - In the implementation block
@property (assign,nonatomic) char monitoringLowConfidenceVisitIncidents;                 //@synthesize monitoringLowConfidenceVisitIncidents=_monitoringLowConfidenceVisitIncidents - In the implementation block
@property (assign,nonatomic) unsigned long long feedBufferReferenceCounter;              //@synthesize feedBufferReferenceCounter=_feedBufferReferenceCounter - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(char)invalid;
-(unsigned long long)feedBufferReferenceCounter;
-(void)setFeedBufferReferenceCounter:(unsigned long long)arg1 ;
-(void)setMonitoringVisitIncidents:(char)arg1 ;
-(void)setMonitoringLeechedVisitIncidents:(char)arg1 ;
-(void)setMonitoringLowConfidenceVisitIncidents:(char)arg1 ;
-(char)monitoringVisitIncidents;
-(char)monitoringLeechedVisitIncidents;
-(char)monitoringLowConfidenceVisitIncidents;
-(id)initWithMonitoringVisitIncidents:(char)arg1 monitoringLeechedVisitIncidents:(char)arg2 monitoringLowConfidenceVisitIncidents:(char)arg3 feedBufferReferenceCounter:(unsigned long long)arg4 ;
@end

