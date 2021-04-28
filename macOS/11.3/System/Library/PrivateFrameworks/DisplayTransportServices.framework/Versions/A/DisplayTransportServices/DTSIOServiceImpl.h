/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DisplayTransportServices.framework/Versions/A/DisplayTransportServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/DTSIOService.h>

@class NSString;

@interface DTSIOServiceImpl : NSObject <DTSIOService> {

	unsigned _service;

}

@property (nonatomic,readonly) unsigned service;                    //@synthesize service=_service - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(unsigned)service;
-(id)initWithService:(unsigned)arg1 ;
-(id)openWithTask:(unsigned)arg1 connectionType:(unsigned)arg2 error:(int*)arg3 ;
@end
