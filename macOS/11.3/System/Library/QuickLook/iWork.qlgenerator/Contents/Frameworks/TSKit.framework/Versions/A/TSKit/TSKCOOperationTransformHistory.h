/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSKit.framework/Versions/A/TSKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <TSKit/TSKit-Structs.h>
@class NSObject, NSMutableArray;

@interface TSKCOOperationTransformHistory : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableArray* _history;

}
-(id)description;
-(id)init;
-(id)willTransformOperation:(shared_ptr<TSKCO::AbstractOperation>*)arg1 withOperation:(shared_ptr<TSKCO::AbstractOperation>*)arg2 ;
-(void)didTransformOperationWithResult:(shared_ptr<TSKCO::AbstractOperation>*)arg1 token:(id)arg2 ;
@end

