/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/Versions/A/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoardServices/FBSSceneLayer.h>

@class CAContext;

@interface FBSCAContextSceneLayer : FBSSceneLayer {

	unsigned _contextID;

}

@property (nonatomic,readonly) CAContext * CAContext; 
@property (nonatomic,readonly) unsigned contextID;                 //@synthesize contextID=_contextID - In the implementation block
+(id)layerWithCAContext:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned)contextID;
-(CAContext *)CAContext;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(id)initWithCAContext:(id)arg1 ;
-(id)_initWithCAContext:(id)arg1 contextID:(unsigned)arg2 fallbackLevel:(double)arg3 ;
-(id)initWithCAContextID:(unsigned)arg1 level:(double)arg2 ;
-(id)_succinctDescription;
-(char)isCAContextLayer;
@end

