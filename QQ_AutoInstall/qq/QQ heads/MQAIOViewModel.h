//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MQViewModel.h"

@class NSAttributedString, NSString;

@interface MQAIOViewModel : MQViewModel
{
    NSAttributedString *_attributeString;
    NSString *_textBlockName;
    id <AIOTopViewDelegate> _aioDelegate;
    struct _NSRange _targetRange;
}

@property(nonatomic) struct _NSRange targetRange; // @synthesize targetRange=_targetRange;
@property(nonatomic) __weak id <AIOTopViewDelegate> aioDelegate; // @synthesize aioDelegate=_aioDelegate;
@property(readonly, nonatomic) NSString *textBlockName; // @synthesize textBlockName=_textBlockName;
- (void).cxx_destruct;
- (id)description;
- (id)defaultMessageStype;
- (id)GetMsgAttribues:(id)arg1;
- (void)refresh;
- (void)reset;
- (void)rebuildAttributeString;
- (id)buildAttributeString;
@property(readonly, nonatomic) NSAttributedString *attributeString;

@end

