/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSPersistence.framework/Versions/A/TSPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSPersistence/TSPersistence-Structs.h>
#import <TSPersistence/TSPFieldTreeNode.h>

@interface TSPFieldTreeNodeWithChildren : TSPFieldTreeNode {

	map<int, TSPFieldTreeNode *, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, TSPFieldTreeNode *>>>* _children;

}
-(void)saveToArchiver:(id)arg1 message:(Message*)arg2 ;
-(id)childNodeForFieldNumber:(int)arg1 ;
-(char)addChildNode:(id)arg1 forFieldNumber:(int)arg2 ;
@end

