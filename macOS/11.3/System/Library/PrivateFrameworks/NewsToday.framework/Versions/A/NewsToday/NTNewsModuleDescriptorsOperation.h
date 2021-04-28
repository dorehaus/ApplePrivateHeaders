/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsToday.framework/Versions/A/NewsToday
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsToday/NTTodayModuleDescriptorsOperation.h>

@protocol NFCopying;
@class NSArray;

@interface NTNewsModuleDescriptorsOperation : NTTodayModuleDescriptorsOperation {

	NSArray* _resultTodayModuleDescriptors;
	id<NFCopying> _prefetchedContent;

}

@property (nonatomic,copy) NSArray * resultTodayModuleDescriptors;              //@synthesize resultTodayModuleDescriptors=_resultTodayModuleDescriptors - In the implementation block
@property (nonatomic,copy) id<NFCopying> prefetchedContent;                     //@synthesize prefetchedContent=_prefetchedContent - In the implementation block
-(void)performOperation;
-(char)validateOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(void)setPrefetchedContent:(id<NFCopying>)arg1 ;
-(void)setResultTodayModuleDescriptors:(NSArray *)arg1 ;
-(NSArray *)resultTodayModuleDescriptors;
-(id<NFCopying>)prefetchedContent;
@end
