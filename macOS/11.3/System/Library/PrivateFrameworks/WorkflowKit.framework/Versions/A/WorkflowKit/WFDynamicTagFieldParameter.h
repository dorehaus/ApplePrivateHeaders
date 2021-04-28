/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/Versions/A/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFTagFieldParameter.h>

@protocol WFDynamicTagFieldDataSource;
@interface WFDynamicTagFieldParameter : WFTagFieldParameter {

	id<WFDynamicTagFieldDataSource> _dataSource;

}

@property (assign,nonatomic,__weak) id<WFDynamicTagFieldDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
-(id<WFDynamicTagFieldDataSource>)dataSource;
-(void)setDataSource:(id<WFDynamicTagFieldDataSource>)arg1 ;
-(id)suggestedTags;
@end

