/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ISSupport.framework/Versions/A/ISSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/DAVResponseBodyReader.h>

@class NSMutableData;

@interface ISS_DAVGetReader : NSObject <DAVResponseBodyReader> {

	NSMutableData* _data;

}
-(void)finalize;
-(void)dealloc;
-(id)init;
-(id)data;
-(void)reset;
-(char)request:(id)arg1 acceptResponseWithHTTPStatusCode:(int)arg2 ;
-(void)request:(id)arg1 readResponseBody:(id)arg2 ;
@end

