/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:15 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Versions/A/Transparency
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Transparency/GPBMessage.h>

@class SignedMapHead;

@interface PerApplicationTreeNode : GPBMessage

@property (nonatomic,retain) SignedMapHead * objectMapHead; 
@property (assign,nonatomic) char hasObjectMapHead; 
@property (nonatomic,retain) SignedMapHead * revocationMapHead; 
@property (assign,nonatomic) char hasRevocationMapHead; 
+(id)descriptor;
@end

