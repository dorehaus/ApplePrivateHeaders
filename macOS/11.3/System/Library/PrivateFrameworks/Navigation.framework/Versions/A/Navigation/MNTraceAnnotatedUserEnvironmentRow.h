/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Versions/A/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MNTraceAnnotatedUserEnvironmentRow : NSObject {

	double _startTimestamp;
	double _endTimestamp;
	long long _environmentType;

}

@property (assign,nonatomic) double startTimestamp;                  //@synthesize startTimestamp=_startTimestamp - In the implementation block
@property (assign,nonatomic) double endTimestamp;                    //@synthesize endTimestamp=_endTimestamp - In the implementation block
@property (assign,nonatomic) long long environmentType;              //@synthesize environmentType=_environmentType - In the implementation block
-(double)startTimestamp;
-(double)endTimestamp;
-(void)setEndTimestamp:(double)arg1 ;
-(void)setStartTimestamp:(double)arg1 ;
-(void)setEnvironmentType:(long long)arg1 ;
-(long long)environmentType;
@end
