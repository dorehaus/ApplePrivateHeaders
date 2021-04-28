/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSString, NSURL, SAUIImageResource;

@interface SAAISongTag : SADomainObject

@property (nonatomic,copy) NSString * adamId; 
@property (nonatomic,copy) NSString * album; 
@property (nonatomic,copy) NSString * albumAdamId; 
@property (nonatomic,copy) NSString * artist; 
@property (nonatomic,copy) NSString * artistAdamId; 
@property (nonatomic,copy) NSString * contentRating; 
@property (nonatomic,copy) NSURL * iTunesUri; 
@property (nonatomic,retain) SAUIImageResource * previewImage; 
@property (nonatomic,copy) NSURL * radioStationUri; 
@property (nonatomic,copy) NSString * title; 
+(id)songTag;
+(id)songTagWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setTitle:(NSString *)arg1 ;
-(id)groupIdentifier;
-(NSString *)title;
-(NSString *)album;
-(NSString *)artist;
-(void)setAlbum:(NSString *)arg1 ;
-(void)setArtist:(NSString *)arg1 ;
-(void)setContentRating:(NSString *)arg1 ;
-(NSString *)contentRating;
-(NSString *)adamId;
-(void)setAdamId:(NSString *)arg1 ;
-(void)setPreviewImage:(SAUIImageResource *)arg1 ;
-(SAUIImageResource *)previewImage;
-(id)encodedClassName;
-(NSString *)albumAdamId;
-(void)setAlbumAdamId:(NSString *)arg1 ;
-(NSString *)artistAdamId;
-(void)setArtistAdamId:(NSString *)arg1 ;
-(NSURL *)iTunesUri;
-(void)setITunesUri:(NSURL *)arg1 ;
-(NSURL *)radioStationUri;
-(void)setRadioStationUri:(NSURL *)arg1 ;
@end

