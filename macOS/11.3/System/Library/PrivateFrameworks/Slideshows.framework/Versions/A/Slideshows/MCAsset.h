/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Slideshows.framework/Versions/A/Slideshows
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Slideshows/MCObject.h>

@class NSString;

@interface MCAsset : MCObject {

	NSString* mPath;

}

@property (copy) NSString * path; 
@property (nonatomic,readonly) char isInUse; 
-(id)description;
-(NSString *)path;
-(void)setPath:(NSString *)arg1 ;
-(char)isInUse;
-(id)xmlElement;
-(id)imprint;
-(void)demolish;
-(void)_copySelfToSnapshot:(id)arg1 ;
-(id)initWithImprint:(id)arg1 andMontage:(id)arg2 ;
@end

