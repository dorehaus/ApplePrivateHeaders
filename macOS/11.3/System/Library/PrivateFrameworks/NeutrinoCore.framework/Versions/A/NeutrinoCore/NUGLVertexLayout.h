/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/Versions/A/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface NUGLVertexLayout : NSObject {

	NSArray* _attributes;
	long long _size;

}

@property (readonly) long long count; 
@property (readonly) NSArray * attributes;                  //@synthesize attributes=_attributes - In the implementation block
@property (readonly) long long size;                        //@synthesize size=_size - In the implementation block
@property (readonly) NSArray * attributeNames; 
-(long long)size;
-(id)init;
-(long long)count;
-(NSArray *)attributes;
-(NSArray *)attributeNames;
-(id)initWithAttributes:(id)arg1 ;
-(int)offsetAtIndex:(unsigned long long)arg1 ;
-(long long)offsetForAttribute:(id)arg1 ;
-(id)attributeWithName:(id)arg1 ;
-(unsigned long long)indexOfAttribute:(id)arg1 ;
@end

