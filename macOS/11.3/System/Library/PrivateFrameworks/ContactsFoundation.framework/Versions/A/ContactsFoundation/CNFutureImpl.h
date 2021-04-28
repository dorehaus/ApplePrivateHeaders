/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/Versions/A/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNFutureImpl <NSObject>
@optional
-(char)cancel;
-(char)finishWithResult:(id)arg1 error:(id)arg2;
-(void)_flushCompletionBlocks;

@required
-(char)isCancelled;
-(char)isFinished;
-(void)addFailureBlock:(/*^block*/id)arg1;
-(id)resultBeforeDate:(id)arg1 error:(id*)arg2;
-(void)addSuccessBlock:(/*^block*/id)arg1;
-(void)updateDescriptionWithBuilder:(id)arg1;

@end

