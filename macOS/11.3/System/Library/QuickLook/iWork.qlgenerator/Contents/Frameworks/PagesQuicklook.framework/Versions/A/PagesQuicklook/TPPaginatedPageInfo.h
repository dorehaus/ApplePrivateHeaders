/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/PagesQuicklook.framework/Versions/A/PagesQuicklook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PagesQuicklook/PagesQuicklook-Structs.h>
#import <PagesQuicklook/TPPageInfo.h>

@class NSArray, TPDrawablesZOrder;

@interface TPPaginatedPageInfo : TPPageInfo

@property (nonatomic,readonly) NSArray * floatingDrawableInfos; 
@property (nonatomic,readonly) TPDrawablesZOrder * drawablesZOrder; 
@property (nonatomic,readonly) char isDocumentSetupPage; 
-(id)pageController;
-(CGRect)pageFrame;
-(Class)layoutClass;
-(Class)repClass;
-(TPDrawablesZOrder *)drawablesZOrder;
-(id)orderedDrawables:(id)arg1 ;
-(char)isDocumentSetupPage;
-(NSArray *)floatingDrawableInfos;
@end

