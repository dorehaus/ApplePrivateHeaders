/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSPersistence.framework/Versions/A/TSPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class TSPDocumentResourceInfo;


@protocol TSPDocumentResourceDataStorageInfo <NSObject>
@property (nonatomic,readonly) id<TSUResourceRequest> resourceRequest; 
@property (nonatomic,readonly) TSPDocumentResourceInfo * documentResourceInfo; 
@required
-(id<TSUResourceRequest>)resourceRequest;
-(TSPDocumentResourceInfo *)documentResourceInfo;

@end

