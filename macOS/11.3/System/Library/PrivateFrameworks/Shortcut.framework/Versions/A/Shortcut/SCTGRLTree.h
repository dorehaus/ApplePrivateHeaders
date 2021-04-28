/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:30 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Shortcut.framework/Versions/A/Shortcut
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, SCTGRL, NSMutableArray;

@interface SCTGRLTree : NSObject {

	NSString* mKey;
	SCTGRL* mGRL;
	NSMutableArray* mChildren;
	SCTGRLTree* mParent;

}
-(void)dealloc;
-(id)init;
-(id)parent;
-(id)initWithKey:(id)arg1 ;
-(id)key;
-(id)setKey:(id)arg1 ;
-(id)addChild:(id)arg1 ;
-(id)children;
-(id)setParent:(id)arg1 ;
-(id)toString;
-(id)initRootWithKey:(id)arg1 withGRLIndex:(id)arg2 ;
-(id)grl;
-(id)newChildWithKey:(id)arg1 ;
-(void)addGRLsInGRLIndex:(id)arg1 ;
-(id)childWithKey:(id)arg1 ;
-(id)setGRL:(id)arg1 ;
-(void)addGRLToTree:(id)arg1 ;
@end
