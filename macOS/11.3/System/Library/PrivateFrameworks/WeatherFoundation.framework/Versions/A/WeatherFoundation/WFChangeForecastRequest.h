/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/Versions/A/WeatherFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WeatherFoundation/WFTask.h>

@class WFLocation;

@interface WFChangeForecastRequest : WFTask {

	WFLocation* _location;
	/*^block*/id _completionHandler;

}

@property (nonatomic,copy,readonly) WFLocation * location;              //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) id completionHandler;                    //@synthesize completionHandler=_completionHandler - In the implementation block
-(WFLocation *)location;
-(id)completionHandler;
-(void)handleResponse:(id)arg1 ;
-(void)handleError:(id)arg1 forResponseIdentifier:(id)arg2 ;
-(void)startWithService:(id)arg1 ;
-(id)initWithLocation:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end
