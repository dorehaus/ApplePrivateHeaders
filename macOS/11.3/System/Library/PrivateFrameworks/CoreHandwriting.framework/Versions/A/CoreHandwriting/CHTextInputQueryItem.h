/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/Versions/A/CoreHandwriting
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber, NSArray, CHTextCorrectionResult;

@interface CHTextInputQueryItem : NSObject {

	NSNumber* _itemIdentifier;
	NSNumber* _itemStableIdentifier;
	NSArray* _strokeIdentifiers;
	CHTextCorrectionResult* _correctionResult;

}

@property (nonatomic,readonly) NSNumber * itemIdentifier;                              //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (nonatomic,readonly) NSNumber * itemStableIdentifier;                        //@synthesize itemStableIdentifier=_itemStableIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSArray * strokeIdentifiers;                       //@synthesize strokeIdentifiers=_strokeIdentifiers - In the implementation block
@property (nonatomic,readonly) CHTextCorrectionResult * correctionResult;              //@synthesize correctionResult=_correctionResult - In the implementation block
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSNumber *)itemIdentifier;
-(NSArray *)strokeIdentifiers;
-(id)initWithIdentifier:(id)arg1 stableIdentifier:(id)arg2 strokeIdentifiers:(id)arg3 correctionResult:(id)arg4 ;
-(CHTextCorrectionResult *)correctionResult;
-(NSNumber *)itemStableIdentifier;
-(char)isEqualToTextInputQueryItem:(id)arg1 ;
@end

