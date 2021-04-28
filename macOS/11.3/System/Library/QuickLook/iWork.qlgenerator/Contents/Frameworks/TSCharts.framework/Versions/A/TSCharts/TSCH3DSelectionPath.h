/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSCharts.framework/Versions/A/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSCharts/TSCHSelectionPath.h>

@interface TSCH3DSelectionPath : TSCHSelectionPath {

	Class _sceneObjectClass;
	unsigned long long _styleIndex;

}

@property (nonatomic,readonly) Class sceneObjectClass;                     //@synthesize sceneObjectClass=_sceneObjectClass - In the implementation block
@property (nonatomic,readonly) unsigned long long styleIndex;              //@synthesize styleIndex=_styleIndex - In the implementation block
+(id)selectionPathWithClass:(Class)arg1 styleIndex:(unsigned long long)arg2 type:(id)arg3 name:(id)arg4 arguments:(id)arg5 ;
+(id)selectionPathWithClass:(Class)arg1 styleIndex:(unsigned long long)arg2 selectionPath:(id)arg3 ;
-(unsigned long long)styleIndex;
-(Class)sceneObjectClass;
-(id)initWithClass:(Class)arg1 styleIndex:(unsigned long long)arg2 type:(id)arg3 name:(id)arg4 arguments:(id)arg5 ;
@end

