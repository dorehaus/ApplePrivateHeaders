/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSMutableArray;

@interface _NSMarkupTreeNode : NSObject {

	NSMutableDictionary* _attributes;
	NSMutableArray* _children;

}

@property (nonatomic,retain,readonly) NSMutableDictionary * attributes;              //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,retain,readonly) NSMutableArray * children;                     //@synthesize children=_children - In the implementation block
-(void)dealloc;
-(NSMutableDictionary *)attributes;
-(void)addChild:(id)arg1 ;
-(NSMutableArray *)children;
-(void)addAttributes:(id)arg1 ;
@end
