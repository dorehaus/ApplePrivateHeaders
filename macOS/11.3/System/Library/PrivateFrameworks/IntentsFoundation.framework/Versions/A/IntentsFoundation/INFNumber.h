/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:34 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IntentsFoundation.framework/Versions/A/IntentsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IntentsFoundation/INFSentenceToken.h>

@class NSString, NSNumber;

@interface INFNumber : INFSentenceToken {

	NSString* _identifier;
	NSNumber* _value;

}

@property (nonatomic,copy) NSNumber * value;              //@synthesize value=_value - In the implementation block
+(id)numberWithIdentifier:(id)arg1 ;
-(id)identifier;
-(id)initWithIdentifier:(id)arg1 ;
-(NSNumber *)value;
-(id)dictionaryRepresentation;
-(void)setValue:(NSNumber *)arg1 ;
-(id)stringForContext:(id)arg1 ;
-(id)contributingSentenceContext;
@end
