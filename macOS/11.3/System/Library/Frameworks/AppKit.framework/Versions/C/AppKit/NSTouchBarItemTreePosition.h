/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:59 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol NSTouchBarItemTreeParentNode;
@class NSTouchBarItemTreeNode;

@interface NSTouchBarItemTreePosition : NSObject <NSCopying> {

	NSTouchBarItemTreeNode*<NSTouchBarItemTreeParentNode> _parentNode;
	long long _indexInParent;

}

@property (copy,readonly) NSTouchBarItemTreeNode*<NSTouchBarItemTreeParentNode> parentNode;              //@synthesize parentNode=_parentNode - In the implementation block
@property (readonly) long long indexInParent;                                                            //@synthesize indexInParent=_indexInParent - In the implementation block
+(id)positionInParentNode:(id)arg1 atIndex:(long long)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(NSTouchBarItemTreeNode*<NSTouchBarItemTreeParentNode>)parentNode;
-(long long)indexInParent;
@end

