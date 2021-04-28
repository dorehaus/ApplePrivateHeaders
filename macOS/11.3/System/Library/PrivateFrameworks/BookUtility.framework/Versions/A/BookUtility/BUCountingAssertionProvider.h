/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/BookUtility.framework/Versions/A/BookUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, BUCountingAssertionProviderDelegate;
@class NSObject;

@interface BUCountingAssertionProvider : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	unsigned long long _count;
	id<BUCountingAssertionProviderDelegate> _delegate;

}
-(id)initWithDelegate:(id)arg1 ;
-(char)_beginAssertion;
-(char)_endAssertion;
-(id)newAssertion;
@end
