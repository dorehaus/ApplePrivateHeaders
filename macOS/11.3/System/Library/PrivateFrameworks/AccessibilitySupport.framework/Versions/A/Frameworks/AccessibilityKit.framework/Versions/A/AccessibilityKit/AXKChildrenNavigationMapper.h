/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:29 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AccessibilitySupport.framework/Versions/A/Frameworks/AccessibilityKit.framework/Versions/A/AccessibilityKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AccessibilityKit/AccessibilityKit-Structs.h>
@interface AXKChildrenNavigationMapper : NSObject
+(id)_navigationMapForElement:(id)arg1 ;
+(char)_shouldElementBeIgnoredInNavigationMap:(id)arg1 ;
+(unsigned long long)_navigationMapHashForElement:(id)arg1 ;
+(void)_constrainRange:(NSRange)arg1 atIndex:(unsigned long long)arg2 inRanges:(id)arg3 ;
+(void)_insertEmptyRowIntoColumns:(id)arg1 atIndex:(unsigned long long)arg2 ;
+(void)_insertRange:(NSRange)arg1 intoArray:(id)arg2 atIndex:(unsigned long long)arg3 ;
+(id)_insertEmptyColumnToColumns:(id)arg1 atIndex:(unsigned long long)arg2 ;
+(void)_addElement:(id)arg1 atRowIndex:(unsigned long long)arg2 inRows:(id)arg3 atColumnIndex:(unsigned long long)arg4 inColumns:(id)arg5 withRowCount:(unsigned long long*)arg6 forceSplit:(char)arg7 addToTopRow:(char)arg8 ;
+(void)_rebuildColumnAtIndex:(unsigned long long)arg1 inColumns:(id)arg2 inRanges:(id)arg3 ;
+(void)_addElement:(id)arg1 atRowIndex:(unsigned long long)arg2 inRows:(id)arg3 atColumnIndex:(unsigned long long)arg4 inColumns:(id)arg5 withRowCount:(unsigned long long*)arg6 ;
+(id)_mapIntoListsWithColumns:(id)arg1 columnRanges:(id)arg2 rowRanges:(id)arg3 ;
+(id)_orderingFromMapping:(id)arg1 originalChildren:(id)arg2 ;
+(id)orderingForChildrenInBothDirections:(id)arg1 ;
+(char)shouldElementBeIgnoredInNavigationMap:(id)arg1 ;
+(unsigned long long)navigationHash:(id)arg1 ;
@end

