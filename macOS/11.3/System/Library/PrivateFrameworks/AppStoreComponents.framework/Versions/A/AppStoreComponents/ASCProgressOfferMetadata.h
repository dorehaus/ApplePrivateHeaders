/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppStoreComponents.framework/Versions/A/AppStoreComponents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppStoreComponents/ASCOfferMetadata.h>

@interface ASCProgressOfferMetadata : ASCOfferMetadata {

	char _indeterminate;
	double _percent;

}

@property (nonatomic,readonly) double percent;                                       //@synthesize percent=_percent - In the implementation block
@property (assign,getter=isIndeterminate,nonatomic) char indeterminate;              //@synthesize indeterminate=_indeterminate - In the implementation block
+(char)supportsSecureCoding;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(char)isIndeterminate;
-(void)setIndeterminate:(char)arg1 ;
-(double)percent;
-(id)initWithPercent:(double)arg1 ;
-(char)isProgress;
-(id)initIndeterminate;
@end

