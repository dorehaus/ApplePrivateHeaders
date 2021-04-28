/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Install.framework/Versions/A/Install
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Install/Install-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSMutableDictionary;

@interface TreeNode : NSObject <NSCoding, NSCopying> {

	TreeNode* parent;
	NSMutableArray* children;
	NSMutableDictionary* _attributes;
	NSMutableDictionary* _metadata;
	char* value;

}
+(id)treeWithValue:(char*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(char*)value;
-(id)enumerator;
-(id)parent;
-(id)valueForAttribute:(id)arg1 ;
-(void)_setParent:(id)arg1 ;
-(id)children;
-(id)prettyDescription;
-(id)initWithValue:(char*)arg1 ;
-(int)numberOfChildren;
-(id)nodeForPath:(char*)arg1 ;
-(char)setValue:(id)arg1 forAttribute:(id)arg2 ;
-(id)allAttributes;
-(id)fullPath;
-(void)setMetaData:(id)arg1 forKey:(id)arg2 ;
-(id)metaDataForKey:(id)arg1 ;
-(id)addTreePath:(char*)arg1 withType:(int)arg2 ;
-(void)removeTreeNode:(id)arg1 ;
-(id)nodeForPath:(char*)arg1 returningLastNode:(id*)arg2 ;
-(void)removeValueForAttribute:(id)arg1 ;
-(char*)fullpath;
-(char**)_makeCharPartsFromPath:(char*)arg1 numParts:(unsigned*)arg2 ;
-(id)_addTreePathFromParts:(char**)arg1 fromIndex:(unsigned)arg2 numParts:(unsigned)arg3 ;
-(id)_nodeForPathFromParts:(char**)arg1 fromIndex:(unsigned)arg2 numParts:(unsigned)arg3 lastFoundNode:(id*)arg4 ;
-(void)_addChild:(id)arg1 numChildren:(int)arg2 ;
-(id)alternatePath;
-(void)_addToPrettyDescription:(id)arg1 withPrefix:(id)arg2 ;
-(void)setAlternatePath:(id)arg1 ;
-(id)allMetaDataKeys;
-(id)metaDataKeys;
@end

