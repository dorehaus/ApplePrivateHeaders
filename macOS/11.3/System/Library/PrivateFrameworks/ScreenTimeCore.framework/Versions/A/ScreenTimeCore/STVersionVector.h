/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/Versions/A/ScreenTimeCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScreenTimeCore/ScreenTimeCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSString, NSArray, NSData;

@interface STVersionVector : NSObject <NSCopying> {

	NSMutableDictionary* _nodeByIdentifier;
	NSString* _editorIdentifier;

}

@property (nonatomic,retain) NSMutableDictionary * nodeByIdentifier;              //@synthesize nodeByIdentifier=_nodeByIdentifier - In the implementation block
@property (nonatomic,copy) NSString * editorIdentifier;                           //@synthesize editorIdentifier=_editorIdentifier - In the implementation block
@property (nonatomic,readonly) NSArray * nodes; 
@property (nonatomic,copy,readonly) NSData * dataRepresentation; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)debugDescription;
-(id)init;
-(NSData *)dataRepresentation;
-(id)initWithDataRepresentation:(id)arg1 ;
-(NSArray *)nodes;
-(void)join:(id)arg1 ;
-(id)initWithNode:(id)arg1 ;
-(unsigned long long)evaluateCausality:(id)arg1 ;
-(void)setEditorIdentifier:(NSString *)arg1 ;
-(NSString *)editorIdentifier;
-(NSMutableDictionary *)nodeByIdentifier;
-(void)incrementNodeWithIdentifier:(id)arg1 ;
-(char)precedesVersionVector:(id)arg1 ;
-(char)isConcurrentWithVersionVector:(id)arg1 ;
-(char)isEqualToVersionVector:(id)arg1 ;
-(void)setNodeByIdentifier:(NSMutableDictionary *)arg1 ;
@end
