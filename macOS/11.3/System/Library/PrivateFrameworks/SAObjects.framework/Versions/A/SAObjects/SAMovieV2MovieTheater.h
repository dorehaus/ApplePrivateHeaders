/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class SALocalSearchBusiness2, NSArray;

@interface SAMovieV2MovieTheater : SADomainObject

@property (nonatomic,retain) SALocalSearchBusiness2 * business; 
@property (nonatomic,copy) NSArray * movies; 
+(id)movieTheater;
+(id)movieTheaterWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(SALocalSearchBusiness2 *)business;
-(void)setBusiness:(SALocalSearchBusiness2 *)arg1 ;
-(NSArray *)movies;
-(id)encodedClassName;
-(void)setMovies:(NSArray *)arg1 ;
@end

