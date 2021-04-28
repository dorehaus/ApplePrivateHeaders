/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:51 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriFindMy.framework/Versions/A/SiriFindMy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/INObject.h>

@class INSpeakableString, CLLocation, NSString, NSNumber, NSArray;

@interface SpeakableLocation : INObject

@property (retain,nonatomic) INSpeakableString * name; 
@property (retain,nonatomic) CLLocation * location; 
@property (copy,nonatomic) NSString * subThoroughfare; 
@property (copy,nonatomic) NSString * thoroughfare; 
@property (copy,nonatomic) NSString * fullThoroughfare; 
@property (retain,nonatomic) INSpeakableString * locality; 
@property (copy,nonatomic) NSString * administrativeArea; 
@property (copy,nonatomic) NSString * country; 
@property (copy,nonatomic) NSString * countryCode; 
@property (retain,nonatomic) NSNumber * isCoarse; 
@property (copy,nonatomic) NSArray * areasOfInterest; 
-(id)initWithCoder:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 displayString:(id)arg2 pronunciationHint:(id)arg3 ;
@end

