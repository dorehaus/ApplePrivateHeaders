/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AOSKit.framework/Versions/A/AOSKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AOSKit/AOSKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_queue;
@class NSObject, NSConditionLock;

@interface AOSTransaction : NSObject <NSSecureCoding> {

	unsigned char didSucceed;
	unsigned char didFinish;
	void* result;
	CFErrorRef error;
	/*function pointer*/void* callbackFunction;
	/*^block*/id callbackBlock;
	NSObject*<OS_dispatch_queue> callbackQueue;
	void* context;
	NSConditionLock* waitLock;
	/*function pointer*/void* contextRetain;
	/*function pointer*/void* contextRelease;

}
+(char)supportsSecureCoding;
-(void)finalize;
-(void)dealloc;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)error;
-(id)result;
-(char)isSuccessful;
@end

