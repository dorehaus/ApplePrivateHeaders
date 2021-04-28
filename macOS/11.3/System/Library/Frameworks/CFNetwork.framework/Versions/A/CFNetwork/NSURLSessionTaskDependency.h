/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/Versions/A/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURLSessionTaskDependencyDescription, NSURLSessionTask;

@interface NSURLSessionTaskDependency : NSObject {

	NSURLSessionTaskDependencyDescription* _taskDependencyDescription;
	NSURLSessionTask* _parentTask;
	NSURLSessionTask* _mainDocumentTask;

}

@property (nonatomic,retain) NSURLSessionTaskDependencyDescription * taskDependencyDescription;              //@synthesize taskDependencyDescription=_taskDependencyDescription - In the implementation block
@property (nonatomic,retain,readonly) NSURLSessionTask * parentTask;                                         //@synthesize parentTask=_parentTask - In the implementation block
@property (nonatomic,retain,readonly) NSURLSessionTask * mainDocumentTask;                                   //@synthesize mainDocumentTask=_mainDocumentTask - In the implementation block
+(id)taskDependencyWithParentTask:(id)arg1 priority:(float)arg2 exclusive:(char)arg3 ;
+(id)taskDependencyWithMainDocumentTask:(id)arg1 ;
+(id)taskDependencyWithMainDocumentTask:(id)arg1 taskDependencyDescription:(id)arg2 ;
-(NSURLSessionTaskDependencyDescription *)taskDependencyDescription;
-(NSURLSessionTask *)mainDocumentTask;
-(void)setTaskDependencyDescription:(NSURLSessionTaskDependencyDescription *)arg1 ;
-(void)dealloc;
-(id)init;
-(NSURLSessionTask *)parentTask;
@end

