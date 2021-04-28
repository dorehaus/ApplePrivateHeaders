/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/Versions/A/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUIThemeRendition.h>

@class MDLMesh, NSMutableArray, NSArray;

@interface _CUIThemeModelMeshRendition : CUIThemeRendition {

	MDLMesh* _mesh;
	NSMutableArray* _submeshKeys;

}

@property (readonly) NSArray * submeshKeys; 
-(void)dealloc;
-(id)_initWithCSIHeader:(const csiheader*)arg1 ;
-(id)initWithCSIData:(id)arg1 forKey:(const renditionkeytoken*)arg2 ;
-(id)modelMesh;
-(id)initForArchiving:(id)arg1 withSubmeshRenditionKeys:(id)arg2 ;
-(NSArray *)submeshKeys;
-(unsigned long long)writeToData:(id)arg1 ;
@end

