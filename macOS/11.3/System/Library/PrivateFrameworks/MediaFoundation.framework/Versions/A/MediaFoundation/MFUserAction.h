/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MediaFoundation.framework/Versions/A/MediaFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSDictionary;


@protocol MFUserAction
@property (readonly,nonatomic) NSString * identifier; 
@property (readonly,nonatomic) long long type; 
@property (readonly,nonatomic) id<MFTimeStamp> timeStamp; 
@property (readonly,nonatomic) NSDictionary * options; 
@property (readonly,nonatomic) long long source; 
@property (readonly,nonatomic) NSString * sourceID; 
@required
-(long long)type;
-(NSString *)identifier;
-(long long)source;
-(NSDictionary *)options;
-(id<MFTimeStamp>)timeStamp;
-(NSString *)sourceID;

@end

