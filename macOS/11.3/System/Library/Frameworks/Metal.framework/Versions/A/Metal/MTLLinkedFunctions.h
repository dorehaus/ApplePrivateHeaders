/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Metal.framework/Versions/A/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSDictionary;

@interface MTLLinkedFunctions : NSObject <NSCopying>

@property (nonatomic,copy) NSArray * functions; 
@property (nonatomic,copy) NSArray * binaryFunctions; 
@property (nonatomic,copy) NSDictionary * groups; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)alloc;
+(id)linkedFunctions;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)reset;
@end

