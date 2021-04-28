/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:14 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/Versions/A/NetAppsUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NAPromise.h>

@class NAFuture, NSString;

@interface NAPromise : NSObject <NAPromise> {

	NAFuture* _future;

}

@property (readonly) NAFuture * future;                             //@synthesize future=_future - In the implementation block
@property (nonatomic,copy) NSString * descriptor; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSString *)descriptor;
-(void)setDescriptor:(NSString *)arg1 ;
-(char)finishWithError:(id)arg1 ;
-(char)finishWithResult:(id)arg1 error:(id)arg2 ;
-(NAFuture *)future;
-(char)finishWithResult:(id)arg1 ;
-(/*^block*/id)completionHandlerAdapter;
-(/*^block*/id)errorOnlyCompletionHandlerAdapter;
-(id)initWithFuture:(id)arg1 ;
-(char)finishWithNoResult;
@end

