//
//  HelloWorldViewController.h
//  HelloWorld
//
//  Created by Kiko on 2014/07/26.
//
//

#import <UIKit/UIKit.h>

@interface HelloWorldViewController : UIViewController
@property (weak, nonatomic) IBOutlet UILabel *label;
@property (weak, nonatomic) IBOutlet UITextField *textField;
- (IBAction)changeGreeting:(id)sender;

@end
